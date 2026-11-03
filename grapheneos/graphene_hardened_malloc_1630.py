"""Specification for GrapheneOS hardened_malloc quarantine slab configuration order 1630."""

def spec_graphene_hardened_malloc_1630() -> dict:
    return {"system": "GrapheneOS", "spec_id": 1630, "quarantine_slabs": 15, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_hardened_malloc_1630():
    s = spec_graphene_hardened_malloc_1630()
    assert s["spec_id"] == 1630
