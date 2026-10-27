"""Specification for GrapheneOS hardened_malloc quarantine slab configuration order 1300."""

def spec_graphene_hardened_malloc_1300() -> dict:
    return {"system": "GrapheneOS", "spec_id": 1300, "quarantine_slabs": 5, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_hardened_malloc_1300():
    s = spec_graphene_hardened_malloc_1300()
    assert s["spec_id"] == 1300
