"""Specification for GrapheneOS hardened_malloc quarantine slab configuration order 1288."""

def spec_graphene_hardened_malloc_1288() -> dict:
    return {"system": "GrapheneOS", "spec_id": 1288, "quarantine_slabs": 9, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_hardened_malloc_1288():
    s = spec_graphene_hardened_malloc_1288()
    assert s["spec_id"] == 1288
