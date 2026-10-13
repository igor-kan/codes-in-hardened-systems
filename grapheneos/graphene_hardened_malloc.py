"""Specification for GrapheneOS hardened_malloc quarantine slab configuration order 142."""

def spec_graphene_hardened_malloc_142() -> dict:
    return {"system": "GrapheneOS", "spec_id": 142, "quarantine_slabs": 15, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_hardened_malloc_142():
    s = spec_graphene_hardened_malloc_142()
    assert s["spec_id"] == 142
